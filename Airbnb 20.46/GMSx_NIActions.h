//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet;

@interface GMSx_NIActions : NSObject
{
    NSMutableDictionary *_objectToAction;
    NSMutableDictionary *_classToAction;
    NSMutableSet *_objectSet;
    id _target;
}

+ (id)objectFromKeyClass:(Class)arg1 map:(id)arg2;
- (void).cxx_destruct;
@property(nonatomic) __weak id target; // @synthesize target=_target;
@property(retain, nonatomic) NSMutableSet *objectSet; // @synthesize objectSet=_objectSet;
@property(retain, nonatomic) NSMutableDictionary *classToAction; // @synthesize classToAction=_classToAction;
@property(retain, nonatomic) NSMutableDictionary *objectToAction; // @synthesize objectToAction=_objectToAction;
- (unsigned long long)attachedActionTypesForObject:(id)arg1;
- (_Bool)isObjectActionable:(id)arg1;
- (void)attachToClass:(Class)arg1 navigationSelector:(SEL)arg2;
- (void)attachToClass:(Class)arg1 detailSelector:(SEL)arg2;
- (void)attachToClass:(Class)arg1 tapSelector:(SEL)arg2;
- (void)attachToClass:(Class)arg1 navigationBlock:(CDUnknownBlockType)arg2;
- (void)attachToClass:(Class)arg1 detailBlock:(CDUnknownBlockType)arg2;
- (void)attachToClass:(Class)arg1 tapBlock:(CDUnknownBlockType)arg2;
- (id)attachToObject:(id)arg1 navigationSelector:(SEL)arg2;
- (id)attachToObject:(id)arg1 detailSelector:(SEL)arg2;
- (id)attachToObject:(id)arg1 tapSelector:(SEL)arg2;
- (id)attachToObject:(id)arg1 navigationBlock:(CDUnknownBlockType)arg2;
- (id)attachToObject:(id)arg1 detailBlock:(CDUnknownBlockType)arg2;
- (id)attachToObject:(id)arg1 tapBlock:(CDUnknownBlockType)arg2;
- (id)actionForObjectOrClassOfObject:(id)arg1;
- (id)actionForClass:(Class)arg1;
- (id)actionForObject:(id)arg1;
- (id)keyForObject:(id)arg1;
- (id)init;
- (id)initWithTarget:(id)arg1;

@end

