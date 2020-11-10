//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <Module_Framework/YTPageStyling-Protocol.h>

@class NSString, UIButton, UIImage, YTColorPalette, YTFormattedStringLabel, YTImageView, YTLabel, YTLightweightQTMButton, YTQTMButton;

@interface MDXPermissionsView : UIView <YTPageStyling>
{
    YTImageView *_imageView;
    YTFormattedStringLabel *_titleLabel;
    YTLabel *_descriptionLabel;
    YTLightweightQTMButton *_actionButton;
    YTQTMButton *_closeButton;
    YTColorPalette *_colorPalette;
    UIImage *_darkImage;
    UIImage *_lightImage;
    _Bool _scaleImage;
    _Bool _compactLayout;
}

- (void).cxx_destruct;
@property(nonatomic, getter=isCompactLayout) _Bool compactLayout; // @synthesize compactLayout=_compactLayout;
@property(nonatomic) _Bool scaleImage; // @synthesize scaleImage=_scaleImage;
@property(readonly, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(readonly, nonatomic) UIButton *actionButton; // @synthesize actionButton=_actionButton;
@property(copy, nonatomic) NSString *descriptionText;
@property(copy, nonatomic) NSString *title;
- (double)compactViewHeight;
- (void)layoutSubviews;
- (void)pageStyleDidChange:(long long)arg1;
- (void)didMoveToWindow;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

