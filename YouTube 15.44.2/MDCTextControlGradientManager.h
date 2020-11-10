//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CAGradientLayer;

@interface MDCTextControlGradientManager : NSObject
{
    CAGradientLayer *_horizontalGradient;
    CAGradientLayer *_verticalGradient;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CAGradientLayer *verticalGradient; // @synthesize verticalGradient=_verticalGradient;
@property(retain, nonatomic) CAGradientLayer *horizontalGradient; // @synthesize horizontalGradient=_horizontalGradient;
- (id)createLayerWithImage:(id)arg1;
- (id)createImageWithLayer:(id)arg1;
- (id)layerCombiningHorizontalGradient:(id)arg1 withVerticalGradient:(id)arg2;
- (id)combinedGradientMaskLayer;
- (void)commonMDCTextControlGradientManagerInit;
- (id)init;

@end

