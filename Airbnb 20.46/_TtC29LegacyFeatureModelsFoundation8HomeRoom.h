//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AIRModel.h"

@class NSArray, NSNumber, NSString;

@interface _TtC29LegacyFeatureModelsFoundation8HomeRoom : AIRModel
{
    // Error parsing type: , name: id
    // Error parsing type: , name: name
    // Error parsing type: , name: nameWithType
    // Error parsing type: , name: previewHighlights
    // Error parsing type: , name: homeTourHighlights
    // Error parsing type: , name: photos
    // Error parsing type: , name: details
    // Error parsing type: , name: isShared
    // Error parsing type: , name: icons
}

+ (id)idAttributeName;
+ (_Bool)mergeable;
+ (_Bool)cacheable;
+ (id)customKeyPathMapping;
+ (id)customTransformers;
- (void).cxx_destruct;
- (id)initWithExternalRepresentation:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1 error:(id *)arg2;
- (id)init;
@property(nonatomic, copy) NSArray *icons;
@property(nonatomic, retain) NSNumber *isShared; // @synthesize isShared;
@property(nonatomic, copy) NSArray *details;
@property(nonatomic, copy) NSArray *photos;
@property(nonatomic, copy) NSArray *homeTourHighlights;
@property(nonatomic, copy) NSArray *previewHighlights;
@property(nonatomic, copy) NSString *nameWithType;
@property(nonatomic, copy) NSString *name;
@property(nonatomic, copy) NSString *id;

@end
