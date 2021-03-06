//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/IAAdView.h>

@class NSArray, NSMutableArray;

@interface IAMRAIDAdView : IAAdView
{
    _Bool _isMRAIDSize;
    _Bool _isResize;
    NSMutableArray *_initialSelfToSuperviewConstraints;
    NSArray *_initialSelfConstraints;
    unsigned long long _supportedMRAIDOrientation;
    struct CGRect _defaultFrame;
    struct CGAffineTransform _defaultTransform;
}

+ (void)ddSetLogLevel:(unsigned long long)arg1;
+ (unsigned long long)ddLogLevel;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long supportedMRAIDOrientation; // @synthesize supportedMRAIDOrientation=_supportedMRAIDOrientation;
@property(nonatomic) _Bool isResize; // @synthesize isResize=_isResize;
@property(retain, nonatomic) NSArray *initialSelfConstraints; // @synthesize initialSelfConstraints=_initialSelfConstraints;
@property(retain, nonatomic) NSMutableArray *initialSelfToSuperviewConstraints; // @synthesize initialSelfToSuperviewConstraints=_initialSelfToSuperviewConstraints;
@property(nonatomic) _Bool isMRAIDSize; // @synthesize isMRAIDSize=_isMRAIDSize;
@property(nonatomic) struct CGAffineTransform defaultTransform; // @synthesize defaultTransform=_defaultTransform;
@property(nonatomic) struct CGRect defaultFrame; // @synthesize defaultFrame=_defaultFrame;
- (void)dealloc;
- (void)safelyAddSelfConstraints:(id)arg1;
- (id)selfToSuperviewConstraints;
- (void)restoreConstraints;
- (void)backupConstraints;
- (void)setupNewConstraints;
- (void)setDefaultFrame;
- (void)setMRAIDFrame:(struct CGRect)arg1;

@end

