//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MLFeatureProvider-Protocol.h"

@class NSDictionary, NSSet;

@interface NFLXMLFeatureProvider : NSObject <MLFeatureProvider>
{
    NSDictionary *_features;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSDictionary *features; // @synthesize features=_features;
- (id)featureValueForName:(id)arg1;
@property(readonly, nonatomic) NSSet *featureNames;
- (id)initWithDictionary:(id)arg1;

@end

