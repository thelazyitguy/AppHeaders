//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YTCollectionViewCell.h>

#import "YTCollectionViewCellProtocol-Protocol.h"
#import "YTResponder-Protocol.h"

@class NSArray, NSString, YTICompactMultiOfferRenderer, YTMoviesAndShowsCompactMultiOfferView;
@protocol YTInteractionLoggingButtonDelegate, YTResponder;

@interface YTMoviesAndShowsCompactMultiOfferCell : YTCollectionViewCell <YTCollectionViewCellProtocol, YTResponder>
{
    YTICompactMultiOfferRenderer *_renderer;
    YTMoviesAndShowsCompactMultiOfferView *_compactMultiOfferView;
    id <YTResponder> _parentResponder;
    id <YTInteractionLoggingButtonDelegate> _interactionLoggingDelegate;
}

+ (struct CGSize)cellSizeForEntry:(id)arg1 size:(struct CGSize)arg2 gimme:(id)arg3;
+ (struct CGSize)cellSizeForEntry:(id)arg1 size:(struct CGSize)arg2;
- (void).cxx_destruct;
@property(nonatomic) __weak id <YTInteractionLoggingButtonDelegate> interactionLoggingDelegate; // @synthesize interactionLoggingDelegate=_interactionLoggingDelegate;
@property(nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
@property(readonly, nonatomic) NSArray *visibleRenderers;
- (void)prepareForReuse;
- (void)setEntry:(id)arg1;
- (id)entry;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
