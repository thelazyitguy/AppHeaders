//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface SimpleDI : NSObject
{
    NSMutableDictionary *_singletonsDictionary;
    NSMutableDictionary *_definitionsDictionary;
    NSMutableDictionary *_instantiationsDictionary;
}

+ (id)createDefault;
@property(readonly, nonatomic) NSMutableDictionary *instantiationsDictionary; // @synthesize instantiationsDictionary=_instantiationsDictionary;
@property(readonly, nonatomic) NSMutableDictionary *definitionsDictionary; // @synthesize definitionsDictionary=_definitionsDictionary;
@property(readonly, nonatomic) NSMutableDictionary *singletonsDictionary; // @synthesize singletonsDictionary=_singletonsDictionary;
- (void).cxx_destruct;
- (void)registerClass:(Class)arg1 asSingleton:(_Bool)arg2 creationBlock:(CDUnknownBlockType)arg3;
- (id)getForClass:(Class)arg1;
- (id)init;

@end
