//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface BVRecommendationsLoader : NSObject
{
}

+ (void)purgeRecommendationsCache;
- (id)invalidSDKError;
- (_Bool)isSDKValid;
- (id)getIdfaString;
- (id)getURLForRequest:(id)arg1;
- (void)errorOnMainThread:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)completionOnMainThread:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)loadRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2 errorHandler:(CDUnknownBlockType)arg3;
- (id)init;

@end
