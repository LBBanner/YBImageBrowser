//
//  YBImageBrowserCopywriter.h
//  YBImageBrowserDemo
//
//  Created by 杨波 on 2018/4/14.
//  Copyright © 2018年 杨波. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface YBImageBrowserCopywriter : NSObject

//当前无图片数据可保存
@property (nonatomic, copy) NSString *noImageDataToSave;

//访问相册权限被拒绝
@property (nonatomic, copy) NSString *albumAuthorizationDenied;

//保存图片数据到相册成功
@property (nonatomic, copy) NSString *saveImageDataToAlbumSuccessful;

//保存图片数据到相册失败
@property (nonatomic, copy) NSString *saveImageDataToAlbumFailed;

@end
