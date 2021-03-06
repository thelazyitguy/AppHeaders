//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GLUEStyle-Protocol.h"

@class GLUEAccessoryIconViewStyle, GLUELabelStyle, NSString, SPTArtistAboutGlobalChartPositionViewStyle, SPTArtistAboutLargePreviewGradientViewStyle, SPTArtistAboutLargePreviewVerifiedCheckStyle, UIColor;

@interface SPTArtistAboutLargePreviewViewStyle : NSObject <GLUEStyle>
{
    UIColor *_backgroundColor;
    GLUELabelStyle *_biographyLabelStyle;
    double _biographyLabelHeight;
    double _biographyLabelSideMargin;
    double _biographyLabelBottomMargin;
    GLUELabelStyle *_monthlyListenersLabelStyle;
    double _monthlyListenersHeight;
    SPTArtistAboutGlobalChartPositionViewStyle *_globalChartPositionViewStyle;
    double _globalPositionRightMargin;
    double _globalPositionTopMargin;
    GLUEAccessoryIconViewStyle *_disclosureIconViewStyle;
    SPTArtistAboutLargePreviewGradientViewStyle *_gradientStyle;
    SPTArtistAboutLargePreviewVerifiedCheckStyle *_verifiedCheckStyle;
    double _disclosureViewWidth;
    double _disclosureViewLeftMargin;
    GLUELabelStyle *_verifiedArtistLabelStyle;
    double _imageViewTopMargin;
    double _imageViewSideMargin;
    double _verifiedCheckLeftMargin;
    double _verifiedCheckTopMargin;
    double _verifiedLabelLeftMargin;
    double _imageViewCornerRadius;
}

- (void).cxx_destruct;
@property(nonatomic) double imageViewCornerRadius; // @synthesize imageViewCornerRadius=_imageViewCornerRadius;
@property(nonatomic) double verifiedLabelLeftMargin; // @synthesize verifiedLabelLeftMargin=_verifiedLabelLeftMargin;
@property(nonatomic) double verifiedCheckTopMargin; // @synthesize verifiedCheckTopMargin=_verifiedCheckTopMargin;
@property(nonatomic) double verifiedCheckLeftMargin; // @synthesize verifiedCheckLeftMargin=_verifiedCheckLeftMargin;
@property(nonatomic) double imageViewSideMargin; // @synthesize imageViewSideMargin=_imageViewSideMargin;
@property(nonatomic) double imageViewTopMargin; // @synthesize imageViewTopMargin=_imageViewTopMargin;
@property(copy, nonatomic) GLUELabelStyle *verifiedArtistLabelStyle; // @synthesize verifiedArtistLabelStyle=_verifiedArtistLabelStyle;
@property(nonatomic) double disclosureViewLeftMargin; // @synthesize disclosureViewLeftMargin=_disclosureViewLeftMargin;
@property(nonatomic) double disclosureViewWidth; // @synthesize disclosureViewWidth=_disclosureViewWidth;
@property(copy, nonatomic) SPTArtistAboutLargePreviewVerifiedCheckStyle *verifiedCheckStyle; // @synthesize verifiedCheckStyle=_verifiedCheckStyle;
@property(copy, nonatomic) SPTArtistAboutLargePreviewGradientViewStyle *gradientStyle; // @synthesize gradientStyle=_gradientStyle;
@property(copy, nonatomic) GLUEAccessoryIconViewStyle *disclosureIconViewStyle; // @synthesize disclosureIconViewStyle=_disclosureIconViewStyle;
@property(nonatomic) double globalPositionTopMargin; // @synthesize globalPositionTopMargin=_globalPositionTopMargin;
@property(nonatomic) double globalPositionRightMargin; // @synthesize globalPositionRightMargin=_globalPositionRightMargin;
@property(copy, nonatomic) SPTArtistAboutGlobalChartPositionViewStyle *globalChartPositionViewStyle; // @synthesize globalChartPositionViewStyle=_globalChartPositionViewStyle;
@property(nonatomic) double monthlyListenersHeight; // @synthesize monthlyListenersHeight=_monthlyListenersHeight;
@property(copy, nonatomic) GLUELabelStyle *monthlyListenersLabelStyle; // @synthesize monthlyListenersLabelStyle=_monthlyListenersLabelStyle;
@property(nonatomic) double biographyLabelBottomMargin; // @synthesize biographyLabelBottomMargin=_biographyLabelBottomMargin;
@property(nonatomic) double biographyLabelSideMargin; // @synthesize biographyLabelSideMargin=_biographyLabelSideMargin;
@property(nonatomic) double biographyLabelHeight; // @synthesize biographyLabelHeight=_biographyLabelHeight;
@property(copy, nonatomic) GLUELabelStyle *biographyLabelStyle; // @synthesize biographyLabelStyle=_biographyLabelStyle;
@property(copy, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

