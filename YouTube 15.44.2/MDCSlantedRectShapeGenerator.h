//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/MDCShapeGenerating-Protocol.h>

@class MDCRectangleShapeGenerator;

@interface MDCSlantedRectShapeGenerator : NSObject <MDCShapeGenerating>
{
    MDCRectangleShapeGenerator *_rectangleGenerator;
    double _slant;
}

- (void).cxx_destruct;
@property(nonatomic) double slant; // @synthesize slant=_slant;
- (const struct CGPath *)pathForSize:(struct CGSize)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)commonMDCSlantedRectShapeGeneratorInit;
- (id)init;

@end

