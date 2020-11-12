//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaObject-Protocol.h"
#import "JavaSqlWrapper-Protocol.h"

@class NSString;

@protocol JavaSqlResultSetMetaData <JavaSqlWrapper, JavaObject>
- (NSString *)getColumnClassNameWithInt:(int)arg1;
- (_Bool)isDefinitelyWritableWithInt:(int)arg1;
- (_Bool)isWritableWithInt:(int)arg1;
- (_Bool)isReadOnlyWithInt:(int)arg1;
- (NSString *)getColumnTypeNameWithInt:(int)arg1;
- (int)getColumnTypeWithInt:(int)arg1;
- (NSString *)getCatalogNameWithInt:(int)arg1;
- (NSString *)getTableNameWithInt:(int)arg1;
- (int)getScaleWithInt:(int)arg1;
- (int)getPrecisionWithInt:(int)arg1;
- (NSString *)getSchemaNameWithInt:(int)arg1;
- (NSString *)getColumnNameWithInt:(int)arg1;
- (NSString *)getColumnLabelWithInt:(int)arg1;
- (int)getColumnDisplaySizeWithInt:(int)arg1;
- (_Bool)isSignedWithInt:(int)arg1;
- (int)isNullableWithInt:(int)arg1;
- (_Bool)isCurrencyWithInt:(int)arg1;
- (_Bool)isSearchableWithInt:(int)arg1;
- (_Bool)isCaseSensitiveWithInt:(int)arg1;
- (_Bool)isAutoIncrementWithInt:(int)arg1;
- (int)getColumnCount;
@end
