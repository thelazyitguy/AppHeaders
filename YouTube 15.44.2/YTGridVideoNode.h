//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YTVideoNode.h>

#import <Module_Framework/YTCollectionViewCellProtocol-Protocol.h>
#import <Module_Framework/YTDismissableCellProtocol-Protocol.h>

@class NSString, UIView;
@protocol YTResponder;

@interface YTGridVideoNode : YTVideoNode <YTCollectionViewCellProtocol, YTDismissableCellProtocol>
{
    UIView *dismissedOverlayView;
    id <YTResponder> _parentResponder;
}

+ (struct CGSize)cellSizeForEntry:(id)arg1 size:(struct CGSize)arg2;
- (void).cxx_destruct;
@property(nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (id)accessibilityElements;
- (long long)styleForSize:(struct CGSize)arg1;
@property(retain, nonatomic) UIView *dismissedCellOverlayView;
- (void)willUpdateReasonsInlineWithSize:(struct CGSize)arg1;
- (id)dismissableView;
- (id)entry;
- (void)setEntry:(id)arg1;
- (double)yt_width;
- (double)yt_height;
- (struct CGSize)yt_size;
- (void)yt_setSize:(struct CGSize)arg1;
- (id)superview;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

