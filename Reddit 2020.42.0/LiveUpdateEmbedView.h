//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <RedditUI/BaseView.h>

#import "RUIThemeUpdateCallbackProtocol-Protocol.h"

@class NSArray, NSString;
@protocol LiveUpdateEmbedViewDelegate;

@interface LiveUpdateEmbedView : BaseView <RUIThemeUpdateCallbackProtocol>
{
    id <LiveUpdateEmbedViewDelegate> _delegate;
    NSArray *_embeds;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *embeds; // @synthesize embeds=_embeds;
@property(nonatomic) __weak id <LiveUpdateEmbedViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)configureWithEmbedData:(id)arg1;
- (void)themeDidChange:(id)arg1;
- (void)prepareForReuse;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
