//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LOTValueInterpolator.h"

@protocol LOTPointValueDelegate;

@interface LOTPointInterpolator : LOTValueInterpolator
{
    id <LOTPointValueDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <LOTPointValueDelegate> delegate; // @synthesize delegate=_delegate;
- (void)setValueDelegate:(id)arg1;
- (_Bool)hasDelegateOverride;
- (struct CGPoint)pointValueForFrame:(id)arg1;

@end

