//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PTVQueueObject : NSObject
{
    int _id;
    CDUnknownBlockType _block;
    CDUnknownBlockType _should;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType should; // @synthesize should=_should;
@property(nonatomic) int id; // @synthesize id=_id;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
- (id)init:(CDUnknownBlockType)arg1 should:(CDUnknownBlockType)arg2 id:(int)arg3;

@end

