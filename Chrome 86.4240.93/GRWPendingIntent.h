//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString, NSURL;

@interface GRWPendingIntent : NSObject
{
    NSString *_bundleID;
    NSString *_sendingBundleID;
    NSURL *_intentURL;
    NSDate *_timestamp;
}

+ (_Bool)validateBundleIdIsProd:(id)arg1;
+ (void)removePendingIntentForBundleID:(id)arg1;
+ (void)storePendingIntentURL:(id)arg1 forBundleID:(id)arg2;
+ (void)pendingIntentForBundleID:(id)arg1 fulfillIntentBlock:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, nonatomic) NSURL *intentURL; // @synthesize intentURL=_intentURL;
@property(readonly, copy, nonatomic) NSString *sendingBundleID; // @synthesize sendingBundleID=_sendingBundleID;
@property(readonly, copy, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
- (id)description;
- (id)initWithURL:(id)arg1 bundleID:(id)arg2 sendingBundleID:(id)arg3 timestamp:(id)arg4;

@end
