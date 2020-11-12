//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, UIColor;

@interface GMSDLaneGuidanceIconView : UIView
{
    UIColor *_recommendedLaneColor;
    UIColor *_otherLaneColor;
    double _xOffset;
    double _yOffset;
    NSArray *_icons;
    NSArray *_recommendedIcons;
    NSArray *_otherIcons;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *otherIcons; // @synthesize otherIcons=_otherIcons;
@property(readonly, copy, nonatomic) NSArray *recommendedIcons; // @synthesize recommendedIcons=_recommendedIcons;
@property(readonly, copy, nonatomic) NSArray *icons; // @synthesize icons=_icons;
- (id)laneGuidanceImageWithIcons:(id)arg1 color:(id)arg2 size:(struct CGSize)arg3 scale:(double)arg4;
- (void)drawRect:(struct CGRect)arg1;
- (struct CGSize)sizeOfContentsWithSize:(struct CGSize)arg1 shouldLayout:(_Bool)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct UIEdgeInsets)padding;
- (void)layoutSubviews;
- (void)updateWithIcons:(id)arg1 recommendedLaneColor:(id)arg2 otherLaneColor:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

@end
