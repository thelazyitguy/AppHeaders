//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AnalyticsFramework/NSCoding-Protocol.h>
#import <AnalyticsFramework/NSCopying-Protocol.h>
#import <AnalyticsFramework/TBase-Protocol.h>

@class NSString;

@interface AnalyticsTicket : NSObject <TBase, NSCoding, NSCopying>
{
    _Bool _idIsSet;
    _Bool _typeIsSet;
    _Bool _queue_idIsSet;
    _Bool _statusIsSet;
    NSString *_id;
    NSString *_type;
    NSString *_queue_id;
    NSString *_status;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool statusIsSet; // @synthesize statusIsSet=_statusIsSet;
@property(copy, nonatomic) NSString *status; // @synthesize status=_status;
@property(nonatomic) _Bool queue_idIsSet; // @synthesize queue_idIsSet=_queue_idIsSet;
@property(copy, nonatomic) NSString *queue_id; // @synthesize queue_id=_queue_id;
@property(nonatomic) _Bool typeIsSet; // @synthesize typeIsSet=_typeIsSet;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(nonatomic) _Bool idIsSet; // @synthesize idIsSet=_idIsSet;
@property(copy, nonatomic) NSString *id; // @synthesize id=_id;
@property(readonly, copy) NSString *description;
- (_Bool)validate:(id *)arg1;
- (_Bool)write:(id)arg1 error:(id *)arg2;
- (_Bool)read:(id)arg1 error:(id *)arg2;
- (void)unsetStatus;
- (void)unsetQueue_id;
- (void)unsetType;
- (void)unsetId;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithId:(id)arg1 type:(id)arg2 queue_id:(id)arg3 status:(id)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

