//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IOSShared/SDModelObject.h>

@class NSArray;
@protocol WMCartItemBundleComponent;

@interface WMCartItemBundleConfigModel : SDModelObject
{
    NSArray<WMCartItemBundleComponent> *_components;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray<WMCartItemBundleComponent> *components; // @synthesize components=_components;
- (id)formattedBundleDescription:(unsigned long long)arg1;
- (_Bool)validModel;
- (id)mappingDictionaryForData:(id)arg1;

@end

