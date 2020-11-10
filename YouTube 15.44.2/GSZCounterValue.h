//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/NSCopying-Protocol.h>

@class GSZCounter, NSArray;

@interface GSZCounterValue : NSObject <NSCopying>
{
    GSZCounter *_counter;
    long long _increment;
    NSArray *_fieldValues;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *fieldValues; // @synthesize fieldValues=_fieldValues;
@property(readonly, nonatomic) long long increment; // @synthesize increment=_increment;
@property(readonly, nonatomic) GSZCounter *counter; // @synthesize counter=_counter;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithCounter:(id)arg1 incrementValue:(long long)arg2 fieldValues:(id)arg3;

@end

