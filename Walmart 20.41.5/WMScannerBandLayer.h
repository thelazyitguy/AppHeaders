//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuartzCore/CALayer.h>

@class NSTimer, UIColor;

@interface WMScannerBandLayer : CALayer
{
    NSTimer *_internalTimer;
    struct CGRect _currentBandRect;
    UIColor *_bandColor;
    _Bool _alternate;
    _Bool _error;
    double _updateInterval;
    struct CGRect _barcodeRect;
    struct CGRect _bandRect;
}

+ (_Bool)needsDisplayForKey:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) struct CGRect bandRect; // @synthesize bandRect=_bandRect;
@property(nonatomic) _Bool error; // @synthesize error=_error;
@property(nonatomic) struct CGRect barcodeRect; // @synthesize barcodeRect=_barcodeRect;
@property(nonatomic) double updateInterval; // @synthesize updateInterval=_updateInterval;
- (void)stopAnimating;
- (void)startAnimating;
- (void)drawInContext:(struct CGContext *)arg1;
- (void)updateBand;
- (void)resetBand;
- (void)dealloc;
- (id)init;

@end
