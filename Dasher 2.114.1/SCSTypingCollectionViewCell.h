//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ServiceCore/SCSIncomingCollectionViewCell.h>

@class SCSPulsingMultiDotView;

@interface SCSTypingCollectionViewCell : SCSIncomingCollectionViewCell
{
    SCSPulsingMultiDotView *_typingIndicatorView;
}

@property(retain, nonatomic) SCSPulsingMultiDotView *typingIndicatorView; // @synthesize typingIndicatorView=_typingIndicatorView;
- (void).cxx_destruct;
- (_Bool)isAccessibilityElement;
- (void)beginAnimating;
- (void)applyLayoutAttributes:(id)arg1;
- (void)prepareForReuse;

@end
