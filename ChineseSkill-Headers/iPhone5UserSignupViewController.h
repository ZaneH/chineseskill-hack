/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "UITextViewDelegate.h"
#import "ChineseSkillNew-Structs.h"

@class NSURLConnection, NSMutableData, UIButton, UILabel, NSString, UIActivityIndicatorView, UITextField;
@protocol signupVCDelegate;

__attribute__((visibility("hidden")))
@interface iPhone5UserSignupViewController : XXUnknownSuperclass <UITextViewDelegate> {
	UILabel* _emailLabel;
	UILabel* _passwordLabel;
	UILabel* _confirmLabel;
	UILabel* _requiredInforLabel;
	UITextField* _EmailAddress;
	UITextField* _UserPassword;
	UITextField* _ConfirmPassword;
	UIActivityIndicatorView* _activityView;
	UIButton* _signupButton;
	NSString* _usernameCode;
	NSString* _passwordCode;
	NSURLConnection* _connection;
	NSMutableData* _feedXML;
	id<signupVCDelegate> _delegate;
	UIButton* _backBtn;
}
@property(assign, nonatomic) __weak UITextField* ConfirmPassword;
@property(assign, nonatomic) __weak UITextField* EmailAddress;
@property(assign, nonatomic) __weak UITextField* UserPassword;
@property(assign, nonatomic) __weak UIActivityIndicatorView* activityView;
@property(assign, nonatomic) __weak UIButton* backBtn;
@property(assign, nonatomic) __weak UILabel* confirmLabel;
@property(retain, nonatomic) NSURLConnection* connection;
@property(readonly, copy) NSString* debugDescription;
@property(assign, nonatomic) __weak id<signupVCDelegate> delegate;
@property(readonly, copy) NSString* description;
@property(assign, nonatomic) __weak UILabel* emailLabel;
@property(retain, nonatomic) NSMutableData* feedXML;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) NSString* passwordCode;
@property(assign, nonatomic) __weak UILabel* passwordLabel;
@property(assign, nonatomic) __weak UILabel* requiredInforLabel;
@property(assign, nonatomic) __weak UIButton* signupButton;
@property(readonly, assign) Class superclass;
@property(retain, nonatomic) NSString* usernameCode;
- (id)initWithNibName:(id)nibName bundle:(id)bundle;
- (void).cxx_destruct;
- (void)BackButtonClick:(id)click;
- (void)HideKeyBoard:(id)board;
- (void)SignupClick;
- (void)closeBtn:(id)btn;
- (void)connection:(id)connection didFailWithError:(id)error;
- (void)connection:(id)connection didReceiveData:(id)data;
- (void)connection:(id)connection didReceiveResponse:(id)response;
- (void)connectionDidFinishLoading:(id)connection;
- (void)didReceiveMemoryWarning;
- (void)handleError:(id)error;
- (BOOL)isStringContainSubstring:(id)substring SUBSTRING:(id)substring2;
- (void)signupSuccess;
- (void)viewDidLoad;
- (void)viewDidUnload;
- (void)viewWillAppear:(BOOL)view;
- (void)viewWillDisappear:(BOOL)view;
@end
