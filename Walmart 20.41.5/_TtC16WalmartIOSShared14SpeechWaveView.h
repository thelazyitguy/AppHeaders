//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIColor;

@interface _TtC16WalmartIOSShared14SpeechWaveView : UIView
{
    // Error parsing type: , name: numberOfWaves
    // Error parsing type: , name: waveColor
    // Error parsing type: , name: primaryWaveLineWidth
    // Error parsing type: , name: secondaryWaveLineWidth
    // Error parsing type: , name: idleAmplitude
    // Error parsing type: , name: frequency
    // Error parsing type: , name: amplitude
    // Error parsing type: , name: density
    // Error parsing type: , name: phaseShift
    // Error parsing type: , name: phase
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)drawRect:(struct CGRect)arg1;
@property(nonatomic) double phaseShift; // @synthesize phaseShift;
@property(nonatomic) double density; // @synthesize density;
@property(nonatomic) double frequency; // @synthesize frequency;
@property(nonatomic) double idleAmplitude; // @synthesize idleAmplitude;
@property(nonatomic) double secondaryWaveLineWidth; // @synthesize secondaryWaveLineWidth;
@property(nonatomic) double primaryWaveLineWidth; // @synthesize primaryWaveLineWidth;
@property(nonatomic, retain) UIColor *waveColor; // @synthesize waveColor;

@end
