//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GPBFloatArray, NSString;

@interface RawSensorData : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GPBFloatArray *accelerometerXMeasurementsArray; // @dynamic accelerometerXMeasurementsArray;
@property(readonly, nonatomic) unsigned long long accelerometerXMeasurementsArray_Count; // @dynamic accelerometerXMeasurementsArray_Count;
@property(retain, nonatomic) GPBFloatArray *accelerometerYMeasurementsArray; // @dynamic accelerometerYMeasurementsArray;
@property(readonly, nonatomic) unsigned long long accelerometerYMeasurementsArray_Count; // @dynamic accelerometerYMeasurementsArray_Count;
@property(retain, nonatomic) GPBFloatArray *accelerometerZMeasurementsArray; // @dynamic accelerometerZMeasurementsArray;
@property(readonly, nonatomic) unsigned long long accelerometerZMeasurementsArray_Count; // @dynamic accelerometerZMeasurementsArray_Count;
@property(nonatomic) int duration; // @dynamic duration;
@property(nonatomic) int frequency; // @dynamic frequency;
@property(retain, nonatomic) GPBFloatArray *gyroscopeXMeasurementsArray; // @dynamic gyroscopeXMeasurementsArray;
@property(readonly, nonatomic) unsigned long long gyroscopeXMeasurementsArray_Count; // @dynamic gyroscopeXMeasurementsArray_Count;
@property(retain, nonatomic) GPBFloatArray *gyroscopeYMeasurementsArray; // @dynamic gyroscopeYMeasurementsArray;
@property(readonly, nonatomic) unsigned long long gyroscopeYMeasurementsArray_Count; // @dynamic gyroscopeYMeasurementsArray_Count;
@property(retain, nonatomic) GPBFloatArray *gyroscopeZMeasurementsArray; // @dynamic gyroscopeZMeasurementsArray;
@property(readonly, nonatomic) unsigned long long gyroscopeZMeasurementsArray_Count; // @dynamic gyroscopeZMeasurementsArray_Count;
@property(nonatomic) _Bool hasDuration; // @dynamic hasDuration;
@property(nonatomic) _Bool hasFrequency; // @dynamic hasFrequency;
@property(nonatomic) _Bool hasReasonStart; // @dynamic hasReasonStart;
@property(nonatomic) _Bool hasRecordingId; // @dynamic hasRecordingId;
@property(nonatomic) _Bool hasRecordingPartitionCount; // @dynamic hasRecordingPartitionCount;
@property(nonatomic) _Bool hasRecordingPartitionIndex; // @dynamic hasRecordingPartitionIndex;
@property(nonatomic) _Bool hasRepetitionCount; // @dynamic hasRepetitionCount;
@property(nonatomic) _Bool hasRepetitionDelay; // @dynamic hasRepetitionDelay;
@property(nonatomic) _Bool hasStartDelay; // @dynamic hasStartDelay;
@property(copy, nonatomic) NSString *reasonStart; // @dynamic reasonStart;
@property(copy, nonatomic) NSString *recordingId; // @dynamic recordingId;
@property(nonatomic) int recordingPartitionCount; // @dynamic recordingPartitionCount;
@property(nonatomic) int recordingPartitionIndex; // @dynamic recordingPartitionIndex;
@property(nonatomic) int repetitionCount; // @dynamic repetitionCount;
@property(nonatomic) int repetitionDelay; // @dynamic repetitionDelay;
@property(nonatomic) int startDelay; // @dynamic startDelay;

@end

