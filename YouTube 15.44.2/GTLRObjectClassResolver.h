//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/GTLRObjectClassResolver-Protocol.h>

@class NSDictionary, NSString;

@interface GTLRObjectClassResolver : NSObject <GTLRObjectClassResolver>
{
    NSDictionary *_kindToClassMap;
    NSDictionary *_surrogates;
}

+ (id)resolverWithKindMap:(id)arg1 surrogates:(id)arg2;
+ (id)resolverWithKindMap:(id)arg1;
- (void).cxx_destruct;
- (Class)classForJSON:(id)arg1 defaultClass:(Class)arg2;
- (id)initWithKindMap:(id)arg1 surrogates:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

