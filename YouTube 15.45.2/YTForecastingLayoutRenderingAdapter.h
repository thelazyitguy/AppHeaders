//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/YTAdapterRequirementProtocol-Protocol.h>
#import <Module_Framework/YTLayoutRenderingAdapter-Protocol.h>

@class GIMMe, NSString, YTAdLayout, YTAdSlot;
@protocol YTLayoutRenderingAdapterDelegate;

@interface YTForecastingLayoutRenderingAdapter : NSObject <YTLayoutRenderingAdapter, YTAdapterRequirementProtocol>
{
    YTAdSlot *_slot;
    YTAdLayout *_layout;
    id <YTLayoutRenderingAdapterDelegate> _delegate;
    GIMMe *_gimme;
}

+ (id)adapterRequirement;
- (void).cxx_destruct;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void)stopRenderingWithExitReason:(unsigned long long)arg1;
- (void)startRendering;
- (id)slot;
- (void)unload;
- (void)load;
- (id)layout;
- (id)initWithSlot:(id)arg1 layout:(id)arg2 delegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

