//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

#import "YTResponder-Protocol.h"
#import "YTReusableView-Protocol.h"
#import "YTThumbnailMapping-Protocol.h"

@class NSString, UIButton;
@protocol YTResponder;

@interface YTBaseWatchCardCallToActionView : UIControl <YTReusableView, YTResponder, YTThumbnailMapping>
{
    UIButton *_actionButton;
    id <YTResponder> _parentResponder;
    unsigned long long _reuseIndex;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long reuseIndex; // @synthesize reuseIndex=_reuseIndex;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (void)didPressActionButton;
- (id)thumbnailMappings;
- (void)prepareForReuse;
- (void)setHighlighted:(_Bool)arg1;
- (void)navigateWithEndpoint:(id)arg1;
- (void)setActionButtonTitle:(id)arg1;
- (void)dealloc;
- (id)initWithParentResponder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

