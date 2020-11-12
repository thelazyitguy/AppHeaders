//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface GILVisualizerConfiguration : NSObject
{
    _Bool _showMetadataAnnotation;
    _Bool _showRootAnnotation;
    _Bool _showHiddenAnnotation;
    _Bool _showImpressedAnnotation;
    _Bool _showIndexAnnotation;
    _Bool _showSyntheticAnnotation;
}

+ (id)configurationWithNoOptionsEnabled;
+ (id)configurationWithAllOptionsEnabled;
@property(nonatomic) _Bool showSyntheticAnnotation; // @synthesize showSyntheticAnnotation=_showSyntheticAnnotation;
@property(nonatomic) _Bool showIndexAnnotation; // @synthesize showIndexAnnotation=_showIndexAnnotation;
@property(nonatomic) _Bool showImpressedAnnotation; // @synthesize showImpressedAnnotation=_showImpressedAnnotation;
@property(nonatomic) _Bool showHiddenAnnotation; // @synthesize showHiddenAnnotation=_showHiddenAnnotation;
@property(nonatomic) _Bool showRootAnnotation; // @synthesize showRootAnnotation=_showRootAnnotation;
@property(nonatomic) _Bool showMetadataAnnotation; // @synthesize showMetadataAnnotation=_showMetadataAnnotation;
- (id)init;

@end
