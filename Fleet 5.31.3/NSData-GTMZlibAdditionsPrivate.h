//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSData.h>

@interface NSData (GTMZlibAdditionsPrivate)
+ (id)gtm_dataByInflatingBytes:(const void *)arg1 length:(unsigned long long)arg2 isRawData:(_Bool)arg3 error:(id *)arg4;
+ (id)gtm_dataByCompressingBytes:(const void *)arg1 length:(unsigned long long)arg2 compressionLevel:(int)arg3 mode:(int)arg4 error:(id *)arg5;
+ (id)gtm_dataByRawInflatingData:(id)arg1 error:(id *)arg2;
+ (id)gtm_dataByRawInflatingData:(id)arg1;
+ (id)gtm_dataByRawInflatingBytes:(const void *)arg1 length:(unsigned long long)arg2 error:(id *)arg3;
+ (id)gtm_dataByRawInflatingBytes:(const void *)arg1 length:(unsigned long long)arg2;
+ (id)gtm_dataByRawDeflatingData:(id)arg1 compressionLevel:(int)arg2 error:(id *)arg3;
+ (id)gtm_dataByRawDeflatingData:(id)arg1 compressionLevel:(int)arg2;
+ (id)gtm_dataByRawDeflatingBytes:(const void *)arg1 length:(unsigned long long)arg2 compressionLevel:(int)arg3 error:(id *)arg4;
+ (id)gtm_dataByRawDeflatingBytes:(const void *)arg1 length:(unsigned long long)arg2 compressionLevel:(int)arg3;
+ (id)gtm_dataByRawDeflatingData:(id)arg1 error:(id *)arg2;
+ (id)gtm_dataByRawDeflatingData:(id)arg1;
+ (id)gtm_dataByRawDeflatingBytes:(const void *)arg1 length:(unsigned long long)arg2 error:(id *)arg3;
+ (id)gtm_dataByRawDeflatingBytes:(const void *)arg1 length:(unsigned long long)arg2;
+ (id)gtm_dataByInflatingData:(id)arg1 error:(id *)arg2;
+ (id)gtm_dataByInflatingData:(id)arg1;
+ (id)gtm_dataByInflatingBytes:(const void *)arg1 length:(unsigned long long)arg2 error:(id *)arg3;
+ (id)gtm_dataByInflatingBytes:(const void *)arg1 length:(unsigned long long)arg2;
+ (id)gtm_dataByDeflatingData:(id)arg1 compressionLevel:(int)arg2 error:(id *)arg3;
+ (id)gtm_dataByDeflatingData:(id)arg1 compressionLevel:(int)arg2;
+ (id)gtm_dataByDeflatingBytes:(const void *)arg1 length:(unsigned long long)arg2 compressionLevel:(int)arg3 error:(id *)arg4;
+ (id)gtm_dataByDeflatingBytes:(const void *)arg1 length:(unsigned long long)arg2 compressionLevel:(int)arg3;
+ (id)gtm_dataByDeflatingData:(id)arg1 error:(id *)arg2;
+ (id)gtm_dataByDeflatingData:(id)arg1;
+ (id)gtm_dataByDeflatingBytes:(const void *)arg1 length:(unsigned long long)arg2 error:(id *)arg3;
+ (id)gtm_dataByDeflatingBytes:(const void *)arg1 length:(unsigned long long)arg2;
+ (id)gtm_dataByGzippingData:(id)arg1 compressionLevel:(int)arg2 error:(id *)arg3;
+ (id)gtm_dataByGzippingData:(id)arg1 compressionLevel:(int)arg2;
+ (id)gtm_dataByGzippingBytes:(const void *)arg1 length:(unsigned long long)arg2 compressionLevel:(int)arg3 error:(id *)arg4;
+ (id)gtm_dataByGzippingBytes:(const void *)arg1 length:(unsigned long long)arg2 compressionLevel:(int)arg3;
+ (id)gtm_dataByGzippingData:(id)arg1 error:(id *)arg2;
+ (id)gtm_dataByGzippingData:(id)arg1;
+ (id)gtm_dataByGzippingBytes:(const void *)arg1 length:(unsigned long long)arg2 error:(id *)arg3;
+ (id)gtm_dataByGzippingBytes:(const void *)arg1 length:(unsigned long long)arg2;
@end

