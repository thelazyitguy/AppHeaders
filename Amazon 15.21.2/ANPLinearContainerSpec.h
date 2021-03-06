//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ANPWidgetSpec.h"

@interface ANPLinearContainerSpec : ANPWidgetSpec
{
    unsigned long long _horizontalAlignment;
    unsigned long long _verticalAlignment;
    unsigned long long _layoutDirection;
}

@property(nonatomic) unsigned long long layoutDirection; // @synthesize layoutDirection=_layoutDirection;
@property(nonatomic) unsigned long long verticalAlignment; // @synthesize verticalAlignment=_verticalAlignment;
@property(nonatomic) unsigned long long horizontalAlignment; // @synthesize horizontalAlignment=_horizontalAlignment;
- (void)generateLayoutDirectionSpec;
- (void)generateVerticalAlignmentSpec;
- (void)generateHorizontalAlignmentSpec;
- (id)initWithIntermediateSpec:(id)arg1;

@end

