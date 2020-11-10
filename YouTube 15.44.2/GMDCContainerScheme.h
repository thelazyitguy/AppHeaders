//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/GMDCContainerScheming-Protocol.h>

@class GMDCColorScheme, GMDCTypographyScheme, MDCShapeScheme;
@protocol MDCColorScheming, MDCTypographyScheming;

@interface GMDCContainerScheme : NSObject <GMDCContainerScheming>
{
    GMDCColorScheme *_googleMaterialColorScheme;
    GMDCTypographyScheme *_googleMaterialTypographyScheme;
    MDCShapeScheme *_shapeScheme;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MDCShapeScheme *shapeScheme; // @synthesize shapeScheme=_shapeScheme;
@property(retain, nonatomic) GMDCTypographyScheme *googleMaterialTypographyScheme; // @synthesize googleMaterialTypographyScheme=_googleMaterialTypographyScheme;
@property(retain, nonatomic) GMDCColorScheme *googleMaterialColorScheme; // @synthesize googleMaterialColorScheme=_googleMaterialColorScheme;
@property(readonly, nonatomic) id <MDCTypographyScheming> typographyScheme;
@property(readonly, nonatomic) id <MDCColorScheming> colorScheme;
- (id)init;

@end

