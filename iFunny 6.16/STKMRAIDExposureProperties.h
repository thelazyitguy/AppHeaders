//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface STKMRAIDExposureProperties : NSObject
{
    double _exposedPercentage;
    NSString *_scriptRepresentation;
}

+ (id)propertiesWithView:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *scriptRepresentation; // @synthesize scriptRepresentation=_scriptRepresentation;
@property(nonatomic) double exposedPercentage; // @synthesize exposedPercentage=_exposedPercentage;
- (id)dictionaryFromCGRect:(struct CGRect)arg1;
- (id)scriptRepresentationWithExposurePercentage:(float)arg1 visibleRectangle:(struct CGRect)arg2;
- (id)initWithView:(id)arg1;

@end
