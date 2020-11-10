//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YTBaseInnerTubeRequestService.h>

@class NSHashTable, YTApiaryResourceParser;

@interface YTChannelEditService : YTBaseInnerTubeRequestService
{
    NSHashTable *_observers;
    YTApiaryResourceParser *_deleteChannelPostResourceParser;
    YTApiaryResourceParser *_getChannelProfileEditorResourceParser;
    YTApiaryResourceParser *_editChannelBannerResourceParser;
    YTApiaryResourceParser *_editChannelDescriptionResourceParser;
    YTApiaryResourceParser *_editChannelNameResourceParser;
}

- (void).cxx_destruct;
- (void)notifyObserversDidEditChannelName:(id)arg1 givenName:(id)arg2 familyName:(id)arg3;
- (void)notifyObserversDidEditChannelDescription:(id)arg1;
- (void)removeChannelEditServiceObserver:(id)arg1;
- (void)addChannelEditServiceObserver:(id)arg1;
- (void)makeEditChannelNameRequestWithGivenName:(id)arg1 familyName:(id)arg2 clickTrackingParams:(id)arg3 responseBlock:(CDUnknownBlockType)arg4 errorBlock:(CDUnknownBlockType)arg5;
- (void)makeEditChannelDescriptionRequestWithDescription:(id)arg1 clickTrackingParams:(id)arg2 responseBlock:(CDUnknownBlockType)arg3 errorBlock:(CDUnknownBlockType)arg4;
- (void)makeEditChannelBannerRequestWithURL:(id)arg1 responseBlock:(CDUnknownBlockType)arg2 errorBlock:(CDUnknownBlockType)arg3;
- (void)makeGetChannelProfileEditorRequestWithClickTrackingParams:(id)arg1 responseBlock:(CDUnknownBlockType)arg2 errorBlock:(CDUnknownBlockType)arg3;
- (void)makeDeleteChannelPostRequestWithDismissalToken:(id)arg1 clickTrackingParams:(id)arg2 responseBlock:(CDUnknownBlockType)arg3 errorBlock:(CDUnknownBlockType)arg4;
- (id)init;

@end

