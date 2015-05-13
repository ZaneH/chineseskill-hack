/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AWSS3PutObjectRequest.h"

@class AWSS3UploadPartRequest, NSURL, NSString, NSMutableArray;

@interface AWSS3TransferManagerUploadRequest : AWSS3PutObjectRequest {
	int _state;
	unsigned _currentUploadingPartNumber;
	NSMutableArray* _completedPartsArray;
	NSString* _uploadId;
	NSString* _cacheIdentifier;
	AWSS3UploadPartRequest* _currentUploadingPart;
	long long _totalSuccessfullySentPartsDataLength;
}
@property(retain, nonatomic) NSURL* body;
@property(retain, nonatomic) NSString* cacheIdentifier;
@property(retain, nonatomic) NSMutableArray* completedPartsArray;
@property(retain) AWSS3UploadPartRequest* currentUploadingPart;
@property(assign, nonatomic) unsigned currentUploadingPartNumber;
@property(assign, nonatomic) int state;
@property(assign) long long totalSuccessfullySentPartsDataLength;
@property(retain, nonatomic) NSString* uploadId;
- (id)init;
- (void).cxx_destruct;
- (id)cancel;
- (id)pause;
@end
