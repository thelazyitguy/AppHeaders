//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface CSPlayerLogger_Interface : NSObject
{
}

+ (void)logSkipRecapImpression:(id)arg1;
+ (void)endPresentationSession:(id)arg1;
+ (void)logPresentationOfCtaButtons:(id)arg1 button:(id)arg2;
+ (void)logPresentationOfPostPlayRecommendations:(id)arg1;
+ (id)startPostPlayPresentationSession:(id)arg1;
+ (void)endCountdownSession;
+ (void)startCountdownSession;
+ (id)addMediaPlayerContext;
+ (id)addXidContext:(id)arg1 mediaPlayerContextId:(id)arg2;
+ (id)beginPlaySession:(id)arg1 offsetHint:(id)arg2 mediaPlayerContextId:(id)arg3;
+ (id)beginStartPlaySession:(id)arg1 mediaPlayerContextId:(id)arg2;
+ (id)beginPreparePlaySession:(id)arg1;

@end

