//
//  NumEncoder.h
//  Pods
//
//  Created by yanwu wei on 2017/5/12.
//
//

#import <Foundation/Foundation.h>

@interface NumEncoder : NSObject

+ (void)EncodeUInt8ToData:(NSMutableData *)data value:(UInt8)value;

+ (void)EncodeUInt16ToData:(NSMutableData *)data value:(UInt16)value convertToNetworkOrder:(BOOL)flag;

+ (void)EncodeUInt32ToData:(NSMutableData *)data value:(UInt32)value convertToNetworkOrder:(BOOL)flag;

+ (void)EncodeUInt64ToData:(NSMutableData *)data value:(UInt64)value convertToNetworkOrder:(BOOL)flag;

+ (void)EncodeUInt16ToData:(NSMutableData *)data value:(UInt16)value;

+ (void)EncodeUInt32ToData:(NSMutableData *)data value:(UInt32)value;

+ (void)EncodeUInt64ToData:(NSMutableData *)data value:(UInt64)value;

+ (void)EncodeLength:(NSMutableData *)data;

+ (void)ResetLength:(NSMutableData *)data;

+ (void)EncodeOrder:(NSMutableData *)data;

+ (void)EncodeChecksum:(NSMutableData *)data;

+ (void)LogByte:(NSMutableData *)data;

@end
