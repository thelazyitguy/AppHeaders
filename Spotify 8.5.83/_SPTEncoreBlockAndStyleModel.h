//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SPTEncoreTypeStyle;

@interface _SPTEncoreBlockAndStyleModel : NSObject
{
    SPTEncoreTypeStyle *_typeStyle;
    CDUnknownBlockType _block;
}

+ (id)initWithTypeStyle:(id)arg1 andBlock:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property(retain, nonatomic) SPTEncoreTypeStyle *typeStyle; // @synthesize typeStyle=_typeStyle;

@end
