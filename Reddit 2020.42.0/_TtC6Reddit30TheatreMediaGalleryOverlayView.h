//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@interface _TtC6Reddit30TheatreMediaGalleryOverlayView : UIView
{
    // Error parsing type: , name: didTapLink
    // Error parsing type: , name: pageControl
    // Error parsing type: , name: captionLabel
    // Error parsing type: , name: domainLabel
    // Error parsing type: , name: linkIconLabel
}

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)changeSubviewAlphaTo:(double)arg1;
- (void)configureWithCaption:(id)arg1 domain:(id)arg2;
- (void)layoutSubviews;
- (void)onDomainTapped;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithDidTapLink:(CDUnknownBlockType)arg1;
@property(nonatomic) unsigned long long currentPage;
@property(nonatomic) unsigned long long numberOfPages;

@end

