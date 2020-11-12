//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSLayoutConstraint.h>

@class UIView;

@interface QVCSmartLayoutConstraint : NSLayoutConstraint
{
    double _originalConstant;
    double _offConstant;
    _Bool _automatic;
    _Bool _onState;
    UIView *_watchView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *watchView; // @synthesize watchView=_watchView;
@property(nonatomic) _Bool automatic; // @synthesize automatic=_automatic;
@property(nonatomic) double offConstant; // @synthesize offConstant=_offConstant;
- (_Bool)detectState;
- (id)observingKeyForView:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
@property(nonatomic) _Bool onState;
- (void)setConstant:(double)arg1;
- (double)constant;
- (void)dealloc;
- (void)awakeFromNib;
- (void)initSmartLayoutConstraint;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end
