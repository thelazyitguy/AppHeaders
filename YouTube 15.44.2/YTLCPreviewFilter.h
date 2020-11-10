//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface YTLCPreviewFilter : CIFilter
{
    CIFilter *_affineClampFilter;
    CIFilter *_grayscaleFilter;
    CIFilter *_gaussianBlurFilter;
    CIFilter *_blackFilter;
    CIFilter *_blendFilter;
    CIImage *_inputImage;
    NSNumber *_inputBlurRadius;
    NSNumber *_inputBlackOverlayMultiply;
    NSNumber *_inputGrayscaleEnabled;
    NSNumber *_inputBlurEnabled;
}

- (void).cxx_destruct;
@property(retain, nonatomic, getter=isInputBlurEnabled) NSNumber *inputBlurEnabled; // @synthesize inputBlurEnabled=_inputBlurEnabled;
@property(retain, nonatomic, getter=isInputGrayscaleEnabled) NSNumber *inputGrayscaleEnabled; // @synthesize inputGrayscaleEnabled=_inputGrayscaleEnabled;
@property(retain, nonatomic) NSNumber *inputBlackOverlayMultiply; // @synthesize inputBlackOverlayMultiply=_inputBlackOverlayMultiply;
@property(retain, nonatomic) NSNumber *inputBlurRadius; // @synthesize inputBlurRadius=_inputBlurRadius;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage=_inputImage;
- (id)outputImage;
- (void)createFilters;
- (id)init;

@end

