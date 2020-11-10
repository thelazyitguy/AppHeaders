//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IDFlushable-Protocol.h"
#import "IDHmiServiceLifecycleProtocol-Protocol.h"

@class IDVariantData, IDWidgetHmiService, NSString;

@interface IDProperty : NSObject <IDHmiServiceLifecycleProtocol, IDFlushable>
{
    _Bool _dirty;
    long long _identifier;
    unsigned long long _type;
    IDVariantData *_value;
    IDWidgetHmiService *_widgetHmiService;
}

+ (id)new;
- (void).cxx_destruct;
@property(getter=isDirty) _Bool dirty; // @synthesize dirty=_dirty;
@property __weak IDWidgetHmiService *widgetHmiService; // @synthesize widgetHmiService=_widgetHmiService;
@property(copy, nonatomic) IDVariantData *value; // @synthesize value=_value;
@property unsigned long long type; // @synthesize type=_type;
@property long long identifier; // @synthesize identifier=_identifier;
- (void)widgetHmiServiceDidStop:(id)arg1;
- (void)widgetHmiServiceDidStart:(id)arg1;
- (void)flushWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithId:(long long)arg1 type:(unsigned long long)arg2 value:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
