//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBSDKApplicationObserving-Protocol.h"

@class NSArray, NSString, NSURL;

@interface FBSDKAppLink : NSObject <FBSDKApplicationObserving>
{
    _Bool _backToReferrer;
    NSURL *_sourceURL;
    NSArray *_targets;
    NSURL *_webURL;
}

+ (id)getAutoAppLinkViewController;
+ (void)registerIdentifier:(id)arg1 storyBoard:(id)arg2 style:(unsigned long long)arg3;
+ (void)registerViewController:(Class)arg1 style:(unsigned long long)arg2;
+ (id)sharedInstance;
+ (id)appLinkWithSourceURL:(id)arg1 targets:(id)arg2 webURL:(id)arg3;
+ (id)appLinkWithSourceURL:(id)arg1 targets:(id)arg2 webURL:(id)arg3 isBackToReferrer:(_Bool)arg4;
- (void).cxx_destruct;
@property(nonatomic, getter=isBackToReferrer) _Bool backToReferrer; // @synthesize backToReferrer=_backToReferrer;
@property(retain, nonatomic) NSURL *webURL; // @synthesize webURL=_webURL;
@property(copy, nonatomic) NSArray *targets; // @synthesize targets=_targets;
@property(retain, nonatomic) NSURL *sourceURL; // @synthesize sourceURL=_sourceURL;
- (_Bool)application:(id)arg1 openURL:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4;
- (id)initWithIsBackToReferrer:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

