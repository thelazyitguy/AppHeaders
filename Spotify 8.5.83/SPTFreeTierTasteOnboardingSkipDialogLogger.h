//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SPTLogCenter;

@interface SPTFreeTierTasteOnboardingSkipDialogLogger : NSObject
{
    id <SPTLogCenter> _logCenter;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <SPTLogCenter> logCenter; // @synthesize logCenter=_logCenter;
- (void)logInteractionType:(id)arg1 withIntent:(id)arg2 index:(unsigned long long)arg3 identifier:(id)arg4;
- (void)logInteractionType:(id)arg1 withIntent:(id)arg2;
- (void)logImpressionType:(id)arg1 withRenderType:(id)arg2 index:(unsigned long long)arg3 identifier:(id)arg4;
- (void)logImpressionType:(id)arg1 withRenderType:(id)arg2;
- (void)logSkipInteraction;
- (void)logContinueInteraction;
- (void)logSkipDialogImpression;
- (id)initWithLogCenter:(id)arg1;

@end

