//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SMASHHandleAllocator : NSObject
{
    int _counter;
    NSString *_namespace;
}

+ (id)globalInstance;
@property(readonly) NSString *namespace; // @synthesize namespace=_namespace;
@property int counter; // @synthesize counter=_counter;
- (void).cxx_destruct;
- (id)allocateNextHandle;
- (id)initWithNamespace:(id)arg1;

@end
