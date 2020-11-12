//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Core/CMRGenericEvent.h>

@interface CMRAssetGenericEvent : CMRGenericEvent
{
    struct Handle<std::__1::shared_ptr<core::AssetGenericEvent>, std::__1::shared_ptr<core::AssetGenericEvent>> _cppRefHandle;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)forcedPublish;
- (long long)eventType;
- (_Bool)equals:(id)arg1;
- (id)key;
- (id)timestamp;
- (id)rawData;
- (id)arrayObjectValue:(id)arg1;
- (id)arrayStringValue:(id)arg1;
- (id)arrayIntValue:(id)arg1;
- (id)objectValue:(id)arg1 defaultValue:(id)arg2;
- (id)stringValue:(id)arg1 defaultValue:(id)arg2;
- (float)float32Value:(id)arg1 defaultValue:(float)arg2;
- (int)int32Value:(id)arg1 defaultValue:(int)arg2;
- (short)int16Value:(id)arg1 defaultValue:(short)arg2;
- (_Bool)boolValue:(id)arg1 defaultValue:(_Bool)arg2;
- (id)keys;
- (id)error;
- (id)id;
- (id)assetId;
- (const shared_ptr_473f2c40 *)cppRef;
- (id)initWithCpp:(const shared_ptr_473f2c40 *)arg1;

@end
