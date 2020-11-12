//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray;

@interface DYNGradientView : UIView
{
    int _direction;
    NSArray *_colorLocations;
}

+ (Class)layerClass;
- (void).cxx_destruct;
@property(nonatomic) int direction; // @synthesize direction=_direction;
@property(retain, nonatomic) NSArray *colorLocations; // @synthesize colorLocations=_colorLocations;
- (void)updateStartAndEndPoints;
- (void)updateGradientLayer;
- (id)initWithColorLocations:(id)arg1 direction:(int)arg2;

@end
