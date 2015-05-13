#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface TestOutViewController : UIViewController
- (UIButton *)quitButton;

- (UIImageView *)heartImage1;
- (UIImageView *)heartImage2;

- (UIImageView *)heartImage1bg;
- (UIImageView *)heartImage2bg;

- (int)nTotalTest;
@end

@interface OneLessonViewController : UIViewController
- (UIButton *)quitButton;

- (UIImageView *)heartImage1;
- (UIImageView *)heartImage2;
- (UIImageView *)heartImage3;
- (UIImageView *)heartImage4;

- (UIImageView *)heartImage1bg;
- (UIImageView *)heartImage2bg;
- (UIImageView *)heartImage3bg;
- (UIImageView *)heartImage4bg;

- (int)nTotalTest;
@end

%hook TestOutViewController

- (void)viewDidAppear:(BOOL)view {
	%orig;

	UIButton *infiniteLivesButton = [UIButton buttonWithType:UIButtonTypeSystem];
	[infiniteLivesButton setTitle:@"Infinite Lives" forState:UIControlStateNormal];
	[infiniteLivesButton setFrame:CGRectMake([self quitButton].frame.origin.x + [self quitButton].frame.size.width, [self quitButton].frame.origin.y + 20, 200, 50)];
	[infiniteLivesButton addTarget:self
		action:@selector(makeLivesInfinite:)
        forControlEvents:UIControlEventTouchUpInside];

	UIButton *skepTestButton = [UIButton buttonWithType:UIButtonTypeSystem];
	[skepTestButton setTitle:@"Skip Test" forState:UIControlStateNormal];
	[skepTestButton setFrame:CGRectMake(infiniteLivesButton.frame.origin.x + infiniteLivesButton.frame.size.width + 5, infiniteLivesButton.frame.origin.y, 200, 50)];
	[skepTestButton addTarget:self
		action:@selector(skipTestButtonPressed:)
		forControlEvents:UIControlEventTouchUpInside];

	[self.view addSubview:infiniteLivesButton];
	[self.view addSubview:skepTestButton];
}

%new
- (void)makeLivesInfinite:(UIButton *)sender {
	[self performSelector:@selector(setNNumberofLeftHearts:) withObject:[NSNumber numberWithInt:1000000]];
	// couldn't set to nil for some reason so instead I made them invisible
	[[self heartImage1] setHidden:YES];
	[[self heartImage2] setHidden:YES];
	[[self heartImage1bg] setHidden:YES];
	[[self heartImage2bg] setHidden:YES];
	UIAlertView *successAlertView = [[UIAlertView alloc] initWithTitle:@"Success!" message:@"Infinite hearts for the rest of this test." delegate:self cancelButtonTitle:@"Dismiss" otherButtonTitles:nil];
	[successAlertView show];
}

%new
- (void)skipTestButtonPressed:(UIButton *)sender {
	[self performSelector:@selector(setNNumberofLeftHearts:) withObject:[NSNumber numberWithInt:3]];
	NSNumber *totalTest = [NSNumber numberWithInt:[self nTotalTest]];
	objc_msgSend(self, @selector(setNCurTest:), [totalTest integerValue] - 1);
}

%new
- (int)nTotalTest {
	return [objc_getAssociatedObject(self, @selector(nTotalTest)) intValue];
}

// Getter methods
%new
- (UIButton *)quitButton {
	return objc_getAssociatedObject(self, @selector(quitButton));
}

%new
- (UIImageView *)heartImage1 {
	return objc_getAssociatedObject(self, @selector(heartImage1));
}

%new
- (UIImageView *)heartImage2 {
	return objc_getAssociatedObject(self, @selector(heartImage2));
}

%new
- (UIImageView *)heartImage1bg {
	return objc_getAssociatedObject(self, @selector(heartImage1bg));
}

%new
- (UIImageView *)heartImage2bg {
	return objc_getAssociatedObject(self, @selector(heartImage2bg));
}

%end

%hook OneLessonViewController

- (void)viewDidAppear:(BOOL)view {
	%orig;

	UIButton *infiniteLivesButton = [UIButton buttonWithType:UIButtonTypeSystem];
	[infiniteLivesButton setTitle:@"Infinite Lives" forState:UIControlStateNormal];
	[infiniteLivesButton setFrame:CGRectMake([self quitButton].frame.origin.x + [self quitButton].frame.size.width, [self quitButton].frame.origin.y, 200, 50)];
	[infiniteLivesButton addTarget:self
		action:@selector(makeLivesInfinite:)
        forControlEvents:UIControlEventTouchUpInside];

	UIButton *skipLessonButton = [UIButton buttonWithType:UIButtonTypeSystem];
	[skipLessonButton setTitle:@"Skip Lesson" forState:UIControlStateNormal];
	[skipLessonButton setFrame:CGRectMake(infiniteLivesButton.frame.origin.x + infiniteLivesButton.frame.size.width + 5, infiniteLivesButton.frame.origin.y, 200, 50)];
	[skipLessonButton addTarget:self
		action:@selector(skipLessonButtonPressed:)
		forControlEvents:UIControlEventTouchUpInside];

	[self.view addSubview:infiniteLivesButton];
	[self.view addSubview:skipLessonButton];
}

%new
- (void)makeLivesInfinite:(UIButton *)sender {
	[self performSelector:@selector(setNNumberofLeftHearts:) withObject:[NSNumber numberWithInt:1000000]];
	// couldn't set to nil for some reason so instead I made them invisible
	[[self heartImage1] setHidden:YES];
	[[self heartImage2] setHidden:YES];
	[[self heartImage3] setHidden:YES];
	[[self heartImage4] setHidden:YES];

	[[self heartImage1bg] setHidden:YES];
	[[self heartImage2bg] setHidden:YES];
	[[self heartImage3bg] setHidden:YES];
	[[self heartImage4bg] setHidden:YES];
	UIAlertView *successAlertView = [[UIAlertView alloc] initWithTitle:@"Success!" message:@"Infinite lives for the rest of the lesson." delegate:self cancelButtonTitle:@"Dismiss" otherButtonTitles:nil];
	[successAlertView show];
}

%new
- (void)skipLessonButtonPressed:(UIButton *)sender {
	[self performSelector:@selector(setNNumberofLeftHearts:) withObject:[NSNumber numberWithInt:3]];
	NSNumber *totalTest = [NSNumber numberWithInt:[self nTotalTest]];
	objc_msgSend(self, @selector(setNCurTest:), [totalTest integerValue] - 1);
}

// Getter methods
%new
- (UIButton *)quitButton {
	return objc_getAssociatedObject(self, @selector(quitButton));
}

%new
- (UIImageView *)heartImage1 {
	return objc_getAssociatedObject(self, @selector(heartImage1));
}

%new
- (UIImageView *)heartImage2 {
	return objc_getAssociatedObject(self, @selector(heartImage2));
}

%new
- (UIImageView *)heartImage3 {
	return objc_getAssociatedObject(self, @selector(heartImage3));
}

%new
- (UIImageView *)heartImage4 {
	return objc_getAssociatedObject(self, @selector(heartImage4));
}

%new
- (UIImageView *)heartImage1bg {
	return objc_getAssociatedObject(self, @selector(heartImage1bg));
}

%new
- (UIImageView *)heartImage2bg {
	return objc_getAssociatedObject(self, @selector(heartImage2bg));
}

%new
- (UIImageView *)heartImage3bg {
	return objc_getAssociatedObject(self, @selector(heartImage3bg));
}

%new
- (UIImageView *)heartImage4bg {
	return objc_getAssociatedObject(self, @selector(heartImage4bg));
}

%new
- (int)nTotalTest {
	return [objc_getAssociatedObject(self, @selector(nTotalTest)) intValue];
}

%end