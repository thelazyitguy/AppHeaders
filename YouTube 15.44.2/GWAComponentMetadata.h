//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface GWAComponentMetadata : NSObject
{
    id _component;
    unsigned long long _componentType;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long componentType; // @synthesize componentType=_componentType;
@property(readonly, nonatomic) id component; // @synthesize component=_component;
- (id)debugDescription;
@property(readonly, nonatomic) long long uiReference;
- (id)initWithComponent:(id)arg1 componentType:(unsigned long long)arg2;

@end

