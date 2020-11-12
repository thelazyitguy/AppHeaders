//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ChromeInternal/DSCStreamCoding-Protocol.h>
#import <ChromeInternal/NSCopying-Protocol.h>

@class NSString;

@interface DSCDoubleArray : NSObject <NSCopying, DSCStreamCoding>
{
    double *_values;
    unsigned long long _count;
    _Bool _freeWhenDone;
}

- (_Bool)encodeToStream:(id)arg1 error:(id *)arg2;
- (id)initWithStream:(id)arg1 error:(id *)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (double)valueAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long count;
- (void)dealloc;
- (id)initWithValuesNoCopy:(double *)arg1 count:(unsigned long long)arg2;
- (id)initWithValuesNoCopy:(double *)arg1 count:(unsigned long long)arg2 freeWhenDone:(_Bool)arg3;
- (id)initWithValues:(double *)arg1 count:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
