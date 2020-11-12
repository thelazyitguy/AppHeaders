//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface MDCrashUploader : NSObject
{
    _Bool _allowsCellularAccess;
    _Bool _testMode;
    NSString *_appId;
    NSString *_deviceId;
}

+ (id)crashUploaderWithAppId:(id)arg1 deviceId:(id)arg2;
@property(nonatomic) _Bool testMode; // @synthesize testMode=_testMode;
@property(nonatomic) _Bool allowsCellularAccess; // @synthesize allowsCellularAccess=_allowsCellularAccess;
@property(readonly, nonatomic) NSString *deviceId; // @synthesize deviceId=_deviceId;
@property(readonly, nonatomic) NSString *appId; // @synthesize appId=_appId;
- (void).cxx_destruct;
- (id)crashUploadRequestForFormat:(long long)arg1;
- (id)crashUploadURLForFormat:(long long)arg1;
- (void)uploadCrashReport:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithAppId:(id)arg1 deviceId:(id)arg2;

@end
