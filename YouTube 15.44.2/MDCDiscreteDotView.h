//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIColor;

@interface MDCDiscreteDotView : UIView
{
    unsigned long long _numDiscreteDots;
    UIColor *_activeDotColor;
    UIColor *_inactiveDotColor;
    struct CGRect _activeDotsSegment;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGRect activeDotsSegment; // @synthesize activeDotsSegment=_activeDotsSegment;
@property(retain, nonatomic) UIColor *inactiveDotColor; // @synthesize inactiveDotColor=_inactiveDotColor;
@property(retain, nonatomic) UIColor *activeDotColor; // @synthesize activeDotColor=_activeDotColor;
@property(nonatomic) unsigned long long numDiscreteDots; // @synthesize numDiscreteDots=_numDiscreteDots;
- (void)drawRect:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)init;

@end

