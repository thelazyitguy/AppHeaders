//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YTResponderEvent.h>

@class UIView, YTICreatePlaylistEndpoint;
@protocol YTCreatePlaylistViewControllerDelegate;

@interface YTAddPlaylistResponderEvent : YTResponderEvent
{
    UIView *_sender;
    YTICreatePlaylistEndpoint *_createPlaylistEndpoint;
    id <YTCreatePlaylistViewControllerDelegate> _delegate;
}

+ (id)eventWithView:(id)arg1 createPlaylistEndpoint:(id)arg2 delegate:(id)arg3 firstResponder:(id)arg4;
- (void).cxx_destruct;
@property(readonly, nonatomic) __weak id <YTCreatePlaylistViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) YTICreatePlaylistEndpoint *createPlaylistEndpoint; // @synthesize createPlaylistEndpoint=_createPlaylistEndpoint;
@property(readonly, nonatomic) UIView *sender; // @synthesize sender=_sender;
- (id)initWithView:(id)arg1 createPlaylistEndpoint:(id)arg2 delegate:(id)arg3 firstResponder:(id)arg4;

@end

