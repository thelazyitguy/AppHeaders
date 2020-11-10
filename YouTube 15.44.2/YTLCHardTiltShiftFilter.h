//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage;

@interface YTLCHardTiltShiftFilter : CIFilter
{
    CIImage *_inputImage;
    CIFilter *_inputBorderFilter;
    struct CGSize _inputPreviewSize;
    struct CGRect _inputExclusionFrame;
}

+ (id)filterWithBorderBlur;
- (void).cxx_destruct;
@property(retain, nonatomic) CIFilter *inputBorderFilter; // @synthesize inputBorderFilter=_inputBorderFilter;
@property(nonatomic) struct CGSize inputPreviewSize; // @synthesize inputPreviewSize=_inputPreviewSize;
@property(nonatomic) struct CGRect inputExclusionFrame; // @synthesize inputExclusionFrame=_inputExclusionFrame;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage=_inputImage;
- (void)setNilValueForKey:(id)arg1;
- (id)outputImage;

@end
